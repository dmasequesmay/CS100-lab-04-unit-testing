#include "gtest/gtest.h"
#include <gmock/gmock.h>
#include <vector>
#include "../include/Awards.h"


using awards::RankList;
using awards::AwardCeremonyActions;

class MockRankList : public RankList {
    private:
    std::vector<std::string> names;
    int index;

    public: 
    std::string getNext() {
        return names.at(index++);
    }
    MockRankList() : names{"Adam", "Bob", "Charlie"}, index(0) {}
};

class MockAwardCeremonyActions : public AwardCeremonyActions {
    public: 
    MOCK_METHOD(void, playAnthem, (), (override));
    MOCK_METHOD(void, turnOffTheLightsAndGoHome, (), (override));
    MOCK_METHOD(void, awardBronze, (std::string recipient), (override));
    MOCK_METHOD(void, awardSilver, (std::string recipient), (override));
    MOCK_METHOD(void, awardGold, (std::string recipient), (override));
};

using::testing::InSequence;

TEST(AwardsTest, FunctionsRunInOrder) {

    MockRankList recipients;
    MockAwardCeremonyActions actions;

    InSequence seq;
    {
    EXPECT_CALL(actions, playAnthem());
    EXPECT_CALL(actions, awardBronze("Adam"));
    EXPECT_CALL(actions, awardSilver("Bob"));
    EXPECT_CALL(actions, awardGold("Charlie"));
    EXPECT_CALL(actions, turnOffTheLightsAndGoHome());
    }

    performAwardCeremony(recipients, actions);

};
