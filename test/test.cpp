#include "gtest/gtest.h"
#include <gmock/gmock.h>
#include "../include/Awards.h"
#include <vector>
#include <string>
using::testing::InSequence;
using awards::RankList;
using awards::AwardCeremonyActions;

class MockList : public RankList {
    private:
        std::string getNext();
        int index = 0;
        vector<std::string> names = {"Alex", "Bill", "Carly"}; 
}

class MockCeremony : public AwardCeremonyActions {
    MOCK_METHOD(void, playAnthem, (), (override));
    MOCK_METHOD(void, awardBronze, (recipients.getNext()), (override));
    MOCK_METHOD(void, awardSilver, (recipients.getNext()), (override));
    MOCK_METHOD(void, awardGold, (recipients.getNext()),(override));
    MOCK_METHOD(void, turnOffTheLightsAndGoHome, (), (override));
}





