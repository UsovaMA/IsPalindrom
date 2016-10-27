#include <gtest/gtest.h>
#include "palindrom.h"

TEST(Palindrom, EmptyList) {
	EXPECT_TRUE(isPalindrom(0));
}

TEST(Palindrom, OneNode) {
	CNode node(3);
	EXPECT_TRUE(isPalindrom(&node));
}

TEST(Palindrom, NotPalindrom)
{
	const int size = 5;
	CNode nodes[size];
	for (int i = 0; i < size - 1; ++i) {
		nodes[i].next = &(nodes[i + 1]);
		nodes[i].data = i;
	}

	EXPECT_FALSE(isPalindrom(nodes));
}

TEST(Palindrom, IsPalindrom)
{
	const int size = 5;
	CNode nodes[size];
	int data_s[size] = { 1,2,3,2,1 };
	for (int i = 0; i < size - 1; ++i) {
		nodes[i].next = &(nodes[i + 1]);
		nodes[i].data = data_s[i];
	}

	nodes[size - 1] = data_s[size - 1];

	EXPECT_TRUE(isPalindrom(nodes));
}