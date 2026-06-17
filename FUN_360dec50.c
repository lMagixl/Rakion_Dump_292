
void __fastcall FUN_360dec50(void *param_1)

{
  if (*(void **)((int)param_1 + 0x14) != (void *)0x0) {
    FUN_360dec50(*(void **)((int)param_1 + 0x14));
  }
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
    FUN_360dec50(*(void **)((int)param_1 + 0x18));
  }
  operator_delete(param_1);
  return;
}

