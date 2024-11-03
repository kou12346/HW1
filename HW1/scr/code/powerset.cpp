#include <iostream>
using namespace std;

// ���U��ơA�N�l���X���G��X
void printSubset(char subset[], int subsetSize) {
    cout << "{ ";
    for (int i = 0; i < subsetSize; i++) {
        cout << subset[i] << " ";
    }
    cout << "}" << endl;
}

// �ϥλ��j���ͩҦ��l���X
void generateSubsets(char number[], char subset[], int index, int subsetIndex, int n) {
    if (index == n) {  // ��M�����Ҧ�������A��X��e���l���X
        printSubset(subset, subsetIndex);
        return;
    }

    // ����ܷ�e�����A�~�򻼰j
    generateSubsets(number, subset, index + 1, subsetIndex, n);

    // ��ܷ�e�����A�[�J���e�l���X���A�M�Ỽ�j
    subset[subsetIndex] = number[index];
    generateSubsets(number, subset, index + 1, subsetIndex + 1, n);
}

int main() {
    int n;
    
    // ��J�����ƶq
    cout << "�п�J�����Ӽ�: ";
    cin >> n;

    char number[n];  // �ھڿ�J���j�p�ӫإ߰}�C
    char subset[n];  // �ΨӦs���e�l���X���}�C

    // ��J����
    cout << "�п�J " << n << " �Ӥ���: ";
    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    cout << "�Ҧ��l���X�G" << endl;
    generateSubsets(number, subset, 0, 0, n);

    return 0;
}
