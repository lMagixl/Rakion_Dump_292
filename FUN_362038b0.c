
void __cdecl FUN_362038b0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 8) != (void *)0x0) {
      free(*(void **)((int)param_1 + 8));
    }
    free(param_1);
  }
  return;
}

