#include "pch.h"
#include "CppUnitTest.h"
// minor change for initial RED commit

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
    const char* rps_winner(const char* p1, const char* p2);
}

namespace RPSTests
{
    TEST_CLASS(RPSTests)
    {
    public:
        TEST_METHOD(Draw_WhenBothRock)
        {
            const char* result = rps_winner("Rock", "Rock");
            Assert::AreEqual("Draw", result);
        }

        TEST_METHOD(Player1Wins_WhenRockBeatsScissors)
        {
            const char* result = rps_winner("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }

        TEST_METHOD(Player2Wins_WhenScissorsBeatsPaper)
        {
            const char* result = rps_winner("Paper", "Scissors");
            Assert::AreEqual("Player2", result);
        }

        TEST_METHOD(Player1Wins_WhenPaperBeatsRock)
        {
            const char* result = rps_winner("Paper", "Rock");
            Assert::AreEqual("Player1", result);
        }


    };
}
