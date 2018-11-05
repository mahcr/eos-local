#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
#include "include/eoslocal_greet.hpp"

using namespace eosio;

CONTRACT eoslocal : public contract {

  public:
    using contract::contract;
/// @abi action
    ACTION greet() 
    {
      Greet_Action greed_act;
      greed_act.greet_data = "Text of Greeting Section";
      print("your call to greet: %s", greed_act.greet_data);
    }
/// @abi action
    ACTION add() 
    {
      print("your call to add");
    }
/// @abi action
    ACTION result()
    {
      print("your call to result");
    }
};
//EOSIO_ABI( eoslocal, (greet) (add) (result) )
EOSIO_DISPATCH( eoslocal, (greet) (add) (result) );
