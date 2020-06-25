#include "gtest/gtest.h"
#include "Automata.h"

//-----------------------------------------------------------//
//
//     THE STATE DIAGRAM CORRESPONDS TO THE PROPOSED ONE
//
//-----------------------------------------------------------//

TEST(lab4,task1)
{
	Automata *a = new Automata();
	a->associate();
	(*a).check(3);
	EXPECT_EQ(3, a->getState());
}

TEST(lab4, task2)
{
	Automata *a = new Automata();
	EXPECT_EQ(0, a->getState());
}

TEST(lab4, task3)
{
	Automata *a = new Automata();
	a->cook();
	EXPECT_EQ(4, a->getState());
}

TEST(lab4, task4)
{
	Automata *a = new Automata();
	a->on();
	EXPECT_EQ(1, a->getState());
}

TEST(lab4, task5)
{
	Automata *a = new Automata();
	a->coin(400);
	EXPECT_EQ(2, a->getState());
}

TEST(lab4, task6)
{
	Automata *a = new Automata();
	a->finish();
	EXPECT_EQ(2, a->getState());
}