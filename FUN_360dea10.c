
void __fastcall FUN_360dea10(void *param_1)

{
  if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
    FUN_360dea10(*(void **)((int)param_1 + 0x24));
  }
  if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
    FUN_360dea10(*(void **)((int)param_1 + 0x28));
  }
  operator_delete(param_1);
  return;
}

