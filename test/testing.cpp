#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE test
#include <boost/test/unit_test.hpp>
#include "header.h"

BOOST_AUTO_TEST_CASE( my_addition_test )
{
    BOOST_CHECK_EQUAL( calculate(10000) , 2000 );
}

BOOST_AUTO_TEST_CASE( my_addition_test1 )
{
    BOOST_CHECK_EQUAL( calculate(50000) , 12500 );
}

BOOST_AUTO_TEST_CASE( my_addition_test2 )
{
    BOOST_CHECK_EQUAL( calculate(200000) , 75000 );
}
