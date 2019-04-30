/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};


TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
TEST(TicTacToeBoardTest(), unitTestName)
{
	TicTacToeBoard board;
	board.toggleTurn();
	ASSERT_EQ(board.toggleTurn(), X);
}
TEST(TicTacToeBoardTest(), unitTestName)
{
	TicTacToeBoard board;
	board.toggleTurn();
	ASSERT_EQ(board.toggleTurn(), O);
}
TEST(TicTacToeBoardTest(), unitTestName)
{
	TicTacToeBoard board;
	board.getPiece();
	ASSERT_EQ(board.getPiece(), 0, 0);
}
TEST(TicTacToeBoardTest(), unitTestName)
{
	TicTacToeBoard board;
	board.getPiece();
	ASSERT_EQ(board.getPiece(), 0 , 2);
}
TEST(TicTacToeBoardTest(), unitTestName)
{
	TicTacToeBoard board;
	board.getPiece();
	ASSERT_EQ(board.getPiece(), 2, 1);
}
TEST(TicTacToeBoardTest(), unitTestName)
{
	TicTacToeBoard board;
	board.getWinner();
	ASSERT_EQ(board.getWinner(), X);
}


