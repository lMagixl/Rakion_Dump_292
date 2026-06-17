
undefined4 __fastcall FUN_361a2ee0(undefined4 *param_1)

{
  HANDLE hObject;
  
  hObject = (HANDLE)*param_1;
  if (hObject != (HANDLE)0xffffffff) {
    hObject = (HANDLE)CloseHandle(hObject);
  }
  *param_1 = 0xffffffff;
  return CONCAT31((int3)((uint)hObject >> 8),1);
}

