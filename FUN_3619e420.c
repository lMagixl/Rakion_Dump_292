
void __fastcall FUN_3619e420(time_t *param_1)

{
  tm *ptVar1;
  
  time(param_1);
  ptVar1 = localtime(param_1);
  *(tm **)((int)param_1 + 4) = ptVar1;
  ptVar1->tm_year = ptVar1->tm_year + 0x76c;
  *(int *)(*(int *)((int)param_1 + 4) + 0x10) = *(int *)(*(int *)((int)param_1 + 4) + 0x10) + 1;
  return;
}

