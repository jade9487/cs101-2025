#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp;
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};
    int ra[3];
    char rb[4];
    float rc[3];

    
    if ((fp = fopen("a.bin", "wb+")) == NULL) {
        printf("無法開啟檔案...\n");
        exit(1);
    }

    // 寫入三個陣列
    if (fwrite(a, sizeof(int), 3, fp) != 3) {
        printf("寫入檔案錯誤\n");
    }
    if (fwrite(b, sizeof(char), 3, fp) != 3) {
        printf("寫入檔案錯誤\n");
    }
    if (fwrite(c, sizeof(float), 3, fp) != 3) {
        printf("寫入檔案錯誤\n");
    }

    // 將檔案指標重置到開頭
    fseek(fp, 0, SEEK_SET);

    // 讀取三個陣列
    if (fread(ra, sizeof(int), 3, fp) != 3) {
        printf("讀取檔案錯誤\n");
    }
    if (fread(rb, sizeof(char), 3, fp) != 3) {
        printf("讀取檔案錯誤\n");
    }
    rb[3] = '\0'; // 字串結尾
    if (fread(rc, sizeof(float), 3, fp) != 3) {
        printf("讀取檔案錯誤\n");
    }

    // 輸出讀取的內容
    for (int i = 0; i < 3; i++) {
        printf("%d ", ra[i]);
    }
    printf("\n");

    printf("%s\n", rb);

    
    for (int i = 0; i < 3; i++) {
        printf("%.2f ", rc[i]);
    }
    printf("\n");

    // 關閉檔案
    fclose(fp);

    return 0;
}
