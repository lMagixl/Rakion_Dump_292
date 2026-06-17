
undefined4 __thiscall
FUN_361cebcb(void *this,HMODULE param_1,undefined4 param_2,int param_3,int param_4)

{
  HRSRC hResInfo;
  DWORD DVar1;
  HGLOBAL hResData;
  LPVOID pvVar2;
  code *pcVar3;
  
  if (*(int *)this != 0) {
    FUN_361cebac(this);
  }
  pcVar3 = FindResourceW_exref;
  if (param_4 == 0) {
    pcVar3 = FindResourceA_exref;
  }
  if (((param_3 != 0) && (hResInfo = (HRSRC)(*pcVar3)(param_1,param_2,2), hResInfo != (HRSRC)0x0))
     || (hResInfo = (HRSRC)(*pcVar3)(param_1,param_2,10), hResInfo != (HRSRC)0x0)) {
    DVar1 = SizeofResource(param_1,hResInfo);
    *(DWORD *)((int)this + 8) = DVar1;
    if (DVar1 != 0) {
      hResData = LoadResource(param_1,hResInfo);
      *(HGLOBAL *)this = hResData;
      if (hResData != (HGLOBAL)0x0) {
        pvVar2 = LockResource(hResData);
        *(LPVOID *)((int)this + 4) = pvVar2;
        if (pvVar2 != (LPVOID)0x0) {
          return 0;
        }
      }
    }
  }
  GetLastError();
  return 0x88760b59;
}

