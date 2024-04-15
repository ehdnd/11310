// 멍청한 지피티.
/// break 는 가장 가까운 for 문을 탈출함;
// 따라서 외부 루프는 탈출하지 않고 내부 루프만 탈출;
// 외부 루프를 탈출하기 위해서는 goto문이나 루프조건변경, 함수로 분리 등이 필요하다



// 하기 내용은 틀림.



//#include <stdio.h>
//
//int main() {
//    int i, j;
//    
//    for (i = 0; i < 3; i++) {
//        printf("Outer loop: i = %d\n", i);
//        
//        for (j = 0; j < 3; j++) {
//            printf("Inner loop: j = %d\n", j);
//
//            if (j == 1) {
//                printf("Breaking inner loop\n");
//                break; // 내부 for 루프 탈출
//            }
//        }
//    }
//    
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int i, j;
//
//    for (i = 0; i < 3; i++) {
//        printf("Outer loop: i = %d\n", i);
//
//        for (j = 0; j < 3; j++) {
//            printf("Inner loop: j = %d\n", j);
//
//            if (i == 1) {
//                printf("Breaking outer loop\n");
//                break;
//            }
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int i, j;
//
//    for (i = 0; i < 3; i++) {
//        printf("Outer loop: i = %d\n", i);
//
//        for (j = 0; j < 3; j++) {
//            printf("Inner loop: j = %d\n", j);
//
//            if (i == 1 && j == 1) {
//                printf("Breaking outer loop\n");
//                break; // 외부 for 루프 탈출
//            }
//        }
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int i, j;
//
//    for (i = 0; i < 3; i++) {
//        printf("Outer loop: i = %d\n", i);
//
//        for (j = 0; j < 3; j++) {
//            printf("Inner loop: j = %d\n", j);
//
//            if (i == 1) {
//                printf("Breaking outer loop\n");
//                break;
//            }
//        }
//    }
//
//    return 0;
//}
