///*
// * Complete the 'chocolateFeast' function below.
// wrapper = n / c
// chocolate = n / c
// while (wrapper >= m)
// chocolate = chocolate + (wrapper / m)
// wrapper = wrapper / m + wrapper%m
// return wrapper
// */
//
//int chocolateFeast(int n, int c, int m) {
//    int chocolate = n / c;
//    int wrapper = n / c;
//    while (wrapper >= m) {
//        chocolate = chocolate + (wrapper / m);
//        wrapper = (wrapper / m) + (wrapper % m);
//    }
//    return chocolate;
//}