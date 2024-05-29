// Copyright (c) 2024 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/test/unit_test.hpp>

#include <test/util/setup_common.h>
#include <util/bitset.h>

BOOST_FIXTURE_TEST_SUITE(bitset_tests, BasicTestingSetup)

BOOST_AUTO_TEST_CASE(bitset_test_15) {
    uint16_t sim = 0;
    for (uint i{0}; i < 15; ++i) {
        auto set = BitSet<15>::Fill(i+1);
        sim = sim | (1 << i);

        BOOST_CHECK_EQUAL(std::popcount(sim), set.Count());
    }
}

BOOST_AUTO_TEST_SUITE_END()
