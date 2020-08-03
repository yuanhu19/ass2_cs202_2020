#include <iostream>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <map>

// flags to enable tests for the later parts of the assignment
#define ENABLE_T2_TESTS
#define ENABLE_T3_TESTS
#define ENABLE_T4_TESTS

// include headers for classes being tested
#include "ActivityTracker/Length.hpp"
#include "ActivityTracker/Activity.hpp"
#include "ActivityTracker/Athlete.hpp"
#include "ActivityTracker/ScooterActivity.hpp"
#include "ActivityTracker/SwimActivity.hpp"
#include "ActivityTracker/WalkActivity.hpp"
#include "ActivityTracker/EnergyGoal.hpp"
#include "ActivityTracker/ActivityTrackerSystem.hpp"

#ifdef ENABLE_T2_TESTS

#endif /*ENABLE_T2_TESTS*/

#ifdef ENABLE_T3_TESTS

#endif /*ENABLE_T3_TESTS*/

using namespace std;

enum TestResult { TR_PASS, TR_FAIL };

#define ASSERT(condition)                                                         \
    if ((condition) == false) {                                                   \
        cout << "FAILURE: " << __FILE__ << ":" << __LINE__ << "\n"                \
             << "\tExpression '" << #condition << "' evaluated to false" << endl; \
        return TR_FAIL;                                                           \
    }


