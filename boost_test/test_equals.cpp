// #define BOOST_TEST_MODULE test equals
#include <boost/test/included/unit_test.hpp>
#include "complex.hpp"

/** Class REQUIRES operator<< */
/** ./test_equals --help shows options
    ./test_equals --report_level=detailed
 */
/* start first with writing functions and adding. Do not need macro above */
void equals_simple() {
    complex zero_one(0, 0);
    complex zero_two(0, 0);
   
    BOOST_TEST(zero_one == zero_two);
}

void equals_not() {
    
    complex ten_one(10, 1);
    complex eleven_two(11, 2);
   
    BOOST_TEST(!(ten_one == eleven_two));
}

boost::unit_test::test_suite * init_unit_test_suite( int argc, char* argv[] )
{
    boost::unit_test::framework::master_test_suite()
	.add( BOOST_TEST_CASE(&equals_simple));
    boost::unit_test::framework::master_test_suite()
	.add( BOOST_TEST_CASE(&equals_not));

    return 0;
}


/** auto registration show test suite afterwards*/
//BOOST_AUTO_TEST_SUITE(test_equals)

 BOOST_AUTO_TEST_CASE(equals_simple_1) {
    
     complex zero_one(0, 0);
     complex zero_two(0, 0);
   
     BOOST_TEST(zero_one == zero_two);
}

 BOOST_AUTO_TEST_CASE(equals_simple_2) {
    
     complex num_one(10, 1);
     complex num_two(10, 1);
   
    BOOST_TEST(num_one == num_two);
 }

 BOOST_AUTO_TEST_CASE(equals_not_1) {
    
     complex num_one(11, 1);
     complex num_two(11, 2);
  
     BOOST_TEST(!(num_one == num_two));
 }

 BOOST_AUTO_TEST_CASE(equals_not_2) {
   
     complex num_one(11, 1);
     complex num_two(12, 1);
   
     BOOST_TEST(!(num_one == num_two));
 }

BOOST_AUTO_TEST_CASE(equals_not_3) {
    
     complex num_one(11, 1);
     complex num_two(12, 2);
   
     BOOST_TEST(!(num_one == num_two));
 }

BOOST_AUTO_TEST_CASE(divide) {
    
     complex num_one(1, 0);
     complex num_two(0, 0);
   
     BOOST_CHECK_THROW(num_one / num_two, std::invalid_argument);
 }


// BOOST_AUTO_TEST_SUITE_END()