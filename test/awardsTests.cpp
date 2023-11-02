#include "gtest/gtest.h"
#include <gmock/gmock.h>
#include "../include/Awards.h"
#include <vector>
#include <string>
using::testing::InSequence;
using::testing::AtLeast;
using awards::RankList;
using awards::AwardCeremonyActions;

class MockList : public RankList {
    private:
        int index = 0;
        std::vector<std::string> names; 
    public:
        std::string getNext() {
            return names.at(index++);
        }
        MockList() : names{"Alex", "Bill", "Carly"}, index(0) {}
};



class MockCeremony : public AwardCeremonyActions {
    public:
        MOCK_METHOD(void, playAnthem, (), (override));
        MOCK_METHOD(void, awardBronze, (std::string recipients), (override));
        MOCK_METHOD(void, awardSilver, (std::string recipients), (override));
        MOCK_METHOD(void, awardGold, (std::string recipients),(override));
        MOCK_METHOD(void, turnOffTheLightsAndGoHome, (), (override));
};

TEST(AwardsTest, CeremonyInSequence) {
    MockList recipients;
    MockCeremony actions;

    InSequence  seq;
    {
    EXPECT_CALL(actions, playAnthem());
    EXPECT_CALL(actions, awardBronze("Alex"));
    EXPECT_CALL(actions, awardSilver("Bill"));
    EXPECT_CALL(actions, awardGold("Carly"));
    EXPECT_CALL(actions, turnOffTheLightsAndGoHome());
    }
    performAwardCeremony(recipients,actions);
}






