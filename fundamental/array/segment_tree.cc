#include <vector>
#include <iostream>
using namespace std;

template<typename T>
class SegmentTree {
 public:
  struct Node {
    int start;
    int end;
    T data;
    T mark;  // 懒惰标记：延迟对节点信息的修改，只有查询的时候带上
    Node(int start, int end) : start(start), end(end), mark(0) {}
    void addMark(T value) { mark += value; }
    void clearMark() { mark = 0; }
    string toString() { return to_string(start) + "-" + to_string(end); }
  };

  void build(int s, int t, int index) {
    if (index < nodes.size() && nodes[index] == nullptr) {
      nodes[index] = new Node(s, t);
    }
    if (s == t) {
      nodes[index]->data = (*base)[s];
      return;
    }
    int m = s + (t - s) / 2;
    build(s, m, index * 2);
    build(m+1, t, index * 2 + 1);
    nodes[index]->data = nodes[index * 2]->data + nodes[index * 2 + 1]->data;

  }

  explicit SegmentTree<T>(vector<T> &nums) {
    base = &nums; 
    element_cnt = nums.size();
    nodes.resize((nums.size() << 1) + 2, nullptr);
    end = element_cnt - 1;
    root = 1;
    build(0, end, 1);
    base = nullptr;
  }

  void show(int index, int depth=0) {
    if (index >= nodes.size() || nodes[index] == nullptr) return;
    show(index * 2, depth + 1);
    for (int i = 0; i < depth; ++i) putchar('\t');
    printf("%d:%d\n", depth, nodes[index]->data);
    show(index * 2 + 1, depth + 1);
  }

  T query(int index, int start, int end) {
    Node node = nodes[index];
    if (node.start > end || node.end < start) return INT_MAX;
    if (node.start >= start && node.end <= end) return node.data;
    return std::min(query((index << 1) + 1, start, end), query((index << 1) + 2, start, end));
  }

  T rangeSum(int l, int r, int start, int end, int index) {
    // [l, r] 为查询区间，[start, end] 为当前节点所含的区间， index为当前节点在树中的下标
    if (l <= start && end <= r && index < (nodes.size() - 1))
      return nodes[index]->data;
    int m = start + (end - start) / 2;
    int sum = 0;
    maintain(start, end, index);
    // 如果左儿子代表的区间 [start, m] 与询问区间有交集, 则递归查询左儿子
    if (l <= m) sum += getSum(l, r, start, m, index * 2);
    // 如果右儿子代表的区间 [m + 1, end] 与询问区间有交集, 则递归查询右儿子
    if (r > m) sum += getSum(l, r, m + 1, end, index * 2 + 1);
    return sum;
  }

  void rangeAdd(int l, int r, T val, int start, int end, int index) {
    if (l <= start && end <= r) {
      nodes[index]->mark += val;
      nodes[index]->data += (end - start + 1) * val;
    }
    int mid = start + (end - start) / 2;
    maintain(start, end, index);
    if (l <= mid) rangeAdd(l, r, val, start, mid, index * 2);
    if (r > end)  rangeAdd(l, r, mid + 1, end, index * 2 + 1);
    nodes[index]->data = nodes[index * 2]->data + nodes[index * 2 + 1]->data;
  }

  void maintain(int start, int end, int index) {
    int mid = start + (end - start) / 2;
    if (mid != end &&  nodes[index]->mark) {
      nodes[index * 2]->mark += nodes[index]->mark;
      nodes[index * 2 + 1]->mark += nodes[index]->mark;
      nodes[index * 2]->data += nodes[index]->mark * (mid - start + 1);
      nodes[index * 2 + 1]->data += nodes[index]->mark * (end - mid);
      nodes[index]->mark = 0;
    }
  }

  void updateOne(int index, int update, T data) {

  } 
 private:
  vector<Node*> nodes;
  vector<T> *base;
  int element_cnt, root, n4, end;
};

int main() {
  vector<int> arr{10, 11, 12, 13,14};
  SegmentTree<int> tree(arr);
  // tree.show(1, 0);
  cout << tree.rangeSum(2, 4, 0, 4, 1);
  return 0;

}