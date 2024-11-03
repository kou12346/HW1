#include <iostream>
using namespace std;

// 輔助函數，將子集合結果輸出
void printSubset(char subset[], int subsetSize) {
    cout << "{ ";
    for (int i = 0; i < subsetSize; i++) {
        cout << subset[i] << " ";
    }
    cout << "}" << endl;
}

// 使用遞迴產生所有子集合
void generateSubsets(char number[], char subset[], int index, int subsetIndex, int n) {
    if (index == n) {  // 當遍歷完所有元素後，輸出當前的子集合
        printSubset(subset, subsetIndex);
        return;
    }

    // 不選擇當前元素，繼續遞迴
    generateSubsets(number, subset, index + 1, subsetIndex, n);

    // 選擇當前元素，加入到當前子集合中，然後遞迴
    subset[subsetIndex] = number[index];
    generateSubsets(number, subset, index + 1, subsetIndex + 1, n);
}

int main() {
    int n;
    
    // 輸入元素數量
    cout << "請輸入元素個數: ";
    cin >> n;

    char number[n];  // 根據輸入的大小來建立陣列
    char subset[n];  // 用來存放當前子集合的陣列

    // 輸入元素
    cout << "請輸入 " << n << " 個元素: ";
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    cout << "所有子集合：" << endl;
    generateSubsets(number, subset, 0, 0, n);

    return 0;
}
