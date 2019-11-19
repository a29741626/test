#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE test
#include <boost/test/unit_test.hpp>
#include "header.h"

BOOST_AUTO_TEST_CASE( my_addition_test )
{
    BOOST_CHECK_EQUAL( calculate(10000) , 2000 );
}
