#include "pch.h"
#include "CppUnitTest.h"
#include "../Game/game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDriver
{
	TEST_CLASS(UnitTestDriver)
	{
	public:


        TEST_METHOD(DrawCase_Rock_vs_Rock)
        {
            Assert::AreEqual(STR_DRAW, playGame(STR_ROCK, STR_ROCK));
        }

        TEST_METHOD(DrawCase_Paper_vs_Paper)
        {
            Assert::AreEqual(STR_DRAW, playGame(STR_PAPER, STR_PAPER));
        }

        TEST_METHOD(DrawCase_Sissor_vs_Sissor)
        {
            Assert::AreEqual(STR_DRAW, playGame(STR_SISSOR, STR_SISSOR));
        }

        TEST_METHOD(Player1Wins_Rock_over_Sissor)
        {
            Assert::AreEqual(STR_PLAYER1, playGame(STR_ROCK, STR_SISSOR));
        }

        TEST_METHOD(Player1Wins_Sissor_over_Paper)
        {
            Assert::AreEqual(STR_PLAYER1, playGame(STR_SISSOR, STR_PAPER));
        }

        TEST_METHOD(Player1Wins_Paper_over_Rock)
        {
            Assert::AreEqual(STR_PLAYER1, playGame(STR_PAPER, STR_ROCK));
        }

        TEST_METHOD(Player2Wins_Rock_over_Sissor)
        {
            Assert::AreEqual(STR_PLAYER2, playGame(STR_SISSOR, STR_ROCK));
        }

        TEST_METHOD(Player2Wins_Sissor_over_Paper)
        {
            Assert::AreEqual(STR_PLAYER2, playGame(STR_PAPER, STR_SISSOR));
        }

        TEST_METHOD(Player2Wins_Paper_over_Rock)
        {
            Assert::AreEqual(STR_PLAYER2, playGame(STR_ROCK, STR_PAPER));
        }

        TEST_METHOD(InvalidInput_Player1Shape)
        {
            Assert::AreEqual(STR_INVALID, playGame("Gun", STR_ROCK));
        }

        TEST_METHOD(InvalidInput_Player2Shape)
        {
            Assert::AreEqual(STR_INVALID, playGame(STR_ROCK, "Gun"));
        }
	};
}
