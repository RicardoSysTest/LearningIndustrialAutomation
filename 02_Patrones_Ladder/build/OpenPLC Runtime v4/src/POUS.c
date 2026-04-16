void MAIN_init__(MAIN *data__, BOOL retain) {
  TON_init__(&data__->TON0,retain);
  __INIT_VAR(data__->TIMER,__time_to_timespec(1, 0, 5, 0, 0, 0),retain)
  __INIT_VAR(data__->TIME_COUNTER,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->START,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->OUTPUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void MAIN_body__(MAIN *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->TON0.,IN,,__GET_VAR(data__->START,));
  __SET_VAR(data__->TON0.,PT,,__GET_VAR(data__->TIMER,));
  TON_body__(&data__->TON0);
  __SET_VAR(data__->,OUTPUT,,__GET_VAR(data__->TON0.Q,));
  __SET_VAR(data__->,TIME_COUNTER,,__GET_VAR(data__->TON0.ET,));

  goto __end;

__end:
  return;
} // MAIN_body__() 





