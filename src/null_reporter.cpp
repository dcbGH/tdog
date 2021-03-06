//---------------------------------------------------------------------------
// PROJECT      : TDOG
// FILENAME     : null_reporter.cpp
// COPYRIGHT    : Andy Thomas (c) 2016
// WEBSITE      : bigangrydog.com
// LICENSE      : Apache 2.0
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// INCLUDES
//---------------------------------------------------------------------------
#include "null_reporter.hpp"

//---------------------------------------------------------------------------
// NON-CLASS
//---------------------------------------------------------------------------
using namespace tdog;

//---------------------------------------------------------------------------
// CLASS null_reporter : PUBLIC MEMBERS
//---------------------------------------------------------------------------
void null_reporter::gen_start(std::ostream&)
{
  // Does nothing - just a silent sink
}
//---------------------------------------------------------------------------
void null_reporter::gen_test(std::ostream&, const basic_test*)
{
  // Does nothing - just a silent sink
}
//---------------------------------------------------------------------------
void null_reporter::gen_end(std::ostream&)
{
  // Does nothing - just a silent sink
}
//---------------------------------------------------------------------------
