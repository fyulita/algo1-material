#include "gtest/gtest.h"
#include "../funciones.h"

TEST(busquedaLinealTest, vacia) {
    vector<int> s = {};
    int e = 0;
    EXPECT_FALSE(busquedaLineal(s, e));
}

TEST(busquedaLinealTest, noEsta01) {
    vector<int> s = {0, 1, 2, 3, 4};
    int e = 5;
    EXPECT_FALSE(busquedaLineal(s, e));
}

TEST(busquedaLinealTest, noEsta02) {
    vector<int> s = {0, 1, 2, 4};
    int e = 3;
    EXPECT_FALSE(busquedaLineal(s, e));
}

TEST(busquedaLinealTest, esta01) {
    vector<int> s = {0, 1, 2, 4};
    int e = 0;
    EXPECT_TRUE(busquedaLineal(s, e));
}

TEST(busquedaLinealTest, esta02) {
    vector<int> s = {0, 1, 2, 3, 4};
    int e = 2;
    EXPECT_TRUE(busquedaLineal(s, e));
}

TEST(busquedaBinariaTest, vacia) {
    vector<int> s = {};
    int e = 0;
    EXPECT_FALSE(busquedaBinaria(s, e));
}

TEST(busquedaBinariaTest, noEsta01) {
    vector<int> s = {0, 1, 2, 3, 4};
    int e = 5;
    EXPECT_FALSE(busquedaBinaria(s, e));
}

TEST(busquedaBinariaTest, noEsta02) {
    vector<int> s = {0, 1, 2, 4};
    int e = 3;
    EXPECT_FALSE(busquedaBinaria(s, e));
}

TEST(busquedaBinariaTest, esta01) {
    vector<int> s = {0, 1, 2, 4};
    int e = 0;
    EXPECT_TRUE(busquedaBinaria(s, e));
}

TEST(busquedaBinariaTest, esta02) {
    vector<int> s = {0, 1, 2, 3, 4};
    int e = 2;
    EXPECT_TRUE(busquedaBinaria(s, e));
}

TEST(busquedaStringTest, vacia01) {
    string s = "";
    string e = "e";
    EXPECT_FALSE(busquedaString(s, e));
}

TEST(busquedaStringTest, vacia02) {
    string s = "abc";
    string e = "";
    EXPECT_TRUE(busquedaString(s, e));
}

TEST(busquedaStringTest, noEsta01) {
    string s = "abcdefg";
    string e = "h";
    EXPECT_FALSE(busquedaString(s, e));
}

TEST(busquedaStringTest, noEsta02) {
    string s = "abcefghi";
    string e = "d";
    EXPECT_FALSE(busquedaString(s, e));
}

TEST(busquedaStringTest, esta01) {
    string s = "abcdefghij";
    string e = "a";
    EXPECT_TRUE(busquedaString(s, e));
}

TEST(busquedaStringTest, esta02) {
    string s = "abcdefghijk";
    string e = "defg";
    EXPECT_TRUE(busquedaString(s, e));
}

TEST(busquedaKMPTest, vacia01) {
    string s = "";
    string e = "e";
    EXPECT_FALSE(busquedaKMP(s, e));
}

TEST(busquedaKMPTest, vacia02) {
    string s = "abc";
    string e = "";
    EXPECT_TRUE(busquedaKMP(s, e));
}

TEST(busquedaKMPTest, noEsta01) {
    string s = "abcdefg";
    string e = "h";
    EXPECT_FALSE(busquedaKMP(s, e));
}

TEST(busquedaKMPTest, noEsta02) {
    string s = "abcefghi";
    string e = "d";
    EXPECT_FALSE(busquedaKMP(s, e));
}

TEST(busquedaKMPTest, esta01) {
    string s = "abcdefghij";
    string e = "a";
    EXPECT_TRUE(busquedaKMP(s, e));
}

TEST(busquedaKMPTest, esta02) {
    string s = "abcdefghijk";
    string e = "defg";
    EXPECT_TRUE(busquedaKMP(s, e));
}
