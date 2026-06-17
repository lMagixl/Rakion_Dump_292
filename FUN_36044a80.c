
void __fastcall FUN_36044a80(DWORD *param_1)

{
  SetPriorityClass((HANDLE)param_1[3],*param_1);
  SetThreadPriority((HANDLE)param_1[2],param_1[1]);
  return;
}

