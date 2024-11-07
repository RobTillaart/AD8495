//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
//    DATE: 2024-11-07
// PURPOSE: unit tests for the AD8495 library
//     URL: https://github.com/RobTillaart/AD8495
//          https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
//

// supported assertions
// https://github.com/Arduino-CI/arduino_ci/blob/master/cpp/unittest/Assertion.h#L33-L42
// ----------------------------
// assertEqual(expected, actual)
// assertNotEqual(expected, actual)
// assertLess(expected, actual)
// assertMore(expected, actual)
// assertLessOrEqual(expected, actual)
// assertMoreOrEqual(expected, actual)
// assertTrue(actual)
// assertFalse(actual)
// assertNull(actual)
// assertNotNull(actual)

#include <ArduinoUnitTests.h>


#include "Arduino.h"
#include "AD8495.h"


unittest_setup()
{
  fprintf(stderr, "AD8495_LIB_VERSION: %s\n", (char *) AD8495_LIB_VERSION);
}


unittest_teardown()
{
}


unittest(test_constants)
{
  assertEqual(1, 1);
}


unittest(test_constructor)
{
  AD8494 ad(14, 4096, 5.0);
  assertEqualFloat(acd.getPrecision(), 5.0/4096);

  AD8495 ad(14, 1023, 5.0);
  assertEqualFloat(acd.getPrecision(), 5.0/1023);

  AD8496 ad(14, 1023, 3.3);
  assertEqualFloat(acd.getPrecision(), 3.3/1023);

  AD8497 ad(14, 4096, 3.3);
  assertEqualFloat(acd.getPrecision(), 3.3/4096);
}


unittest_main()


//  -- END OF FILE --

