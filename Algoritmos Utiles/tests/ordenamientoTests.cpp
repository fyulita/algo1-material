#include "gtest/gtest.h"
#include "../funciones.h"

TEST(selectionSortTest, vacia){
    vector<int> s = {};
    vector<int> expected = {};
    selectionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(selectionSortTest, iguales){
    vector<int> s = {0, 0, 0, 0, 0, 0};
    vector<int> expected = {0, 0, 0, 0, 0, 0};
    selectionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(selectionSortTest, ordenada){
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    selectionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(selectionSortTest, desordenadaSinRepetir){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7};
    selectionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(selectionSortTest, desordenadaRepetiendo){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5, 5 ,1, 7, 0, 0};
    vector<int> expected = {0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 7, 7};
    selectionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(insertionSortTest, vacia){
    vector<int> s = {};
    vector<int> expected = {};
    insertionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(insertionSortTest, iguales){
    vector<int> s = {0, 0, 0, 0, 0, 0};
    vector<int> expected = {0, 0, 0, 0, 0, 0};
    insertionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(insertionSortTest, ordenada){
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    insertionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(insertionSortTest, desordenadaSinRepetir){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7};
    insertionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(insertionSortTest, desordenadaRepetiendo){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5, 5 ,1, 7, 0, 0};
    vector<int> expected = {0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 7, 7};
    insertionSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailSortTest, vacia){
    vector<int> s = {};
    vector<int> expected = {};
    cocktailSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailSortTest, iguales){
    vector<int> s = {0, 0, 0, 0, 0, 0};
    vector<int> expected = {0, 0, 0, 0, 0, 0};
    cocktailSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailSortTest, ordenada){
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    cocktailSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailSortTest, desordenadaSinRepetir){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7};
    cocktailSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailSortTest, desordenadaRepetiendo){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5, 5, 1, 7, 0, 0};
    vector<int> expected = {0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 7, 7};
    cocktailSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bubbleSortTest, vacia){
    vector<int> s = {};
    vector<int> expected = {};
    bubbleSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bubbleSortTest, iguales){
    vector<int> s = {0, 0, 0, 0, 0, 0};
    vector<int> expected = {0, 0, 0, 0, 0, 0};
    bubbleSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bubbleSortTest, ordenada){
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    bubbleSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bubbleSortTest, desordenadaSinRepetir){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7};
    bubbleSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bubbleSortTest, desordenadaRepetiendo){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5, 5, 1, 7, 0, 0};
    vector<int> expected = {0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 7, 7};
    bubbleSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailShakerSortTest, vacia){
    vector<int> s = {};
    vector<int> expected = {};
    cocktailShakerSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailShakerSortTest, iguales){
    vector<int> s = {0, 0, 0, 0, 0, 0};
    vector<int> expected = {0, 0, 0, 0, 0, 0};
    cocktailShakerSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailShakerSortTest, ordenada){
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    cocktailShakerSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailShakerSortTest, desordenadaSinRepetir){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7};
    cocktailShakerSort(s);
    EXPECT_EQ(s, expected);
}

TEST(cocktailShakerSortTest, desordenadaRepetiendo){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5, 5, 1, 7, 0, 0};
    vector<int> expected = {0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 7, 7};
    cocktailShakerSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bingoSortTest, vacia){
    vector<int> s = {};
    vector<int> expected = {};
    bingoSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bingoSortTest, iguales){
    vector<int> s = {0, 0, 0, 0, 0, 0};
    vector<int> expected = {0, 0, 0, 0, 0, 0};
    bingoSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bingoSortTest, ordenada){
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> expected = {1, 2, 3, 4, 5};
    bingoSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bingoSortTest, desordenadaSinRepetir){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5};
    vector<int> expected = {0, 1, 2, 3, 4, 5, 7};
    bingoSort(s);
    EXPECT_EQ(s, expected);
}

TEST(bingoSortTest, desordenadaRepetiendo){
    vector<int> s = {1, 3, 7, 4, 0, 2, 5, 5, 1, 7, 0, 0};
    vector<int> expected = {0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 7, 7};
    bingoSort(s);
    EXPECT_EQ(s, expected);
}
