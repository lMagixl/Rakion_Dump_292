
/* public: __thiscall CSurfaceType::CSurfaceType(class CSurfaceType const &) */

CSurfaceType * __thiscall CSurfaceType::CSurfaceType(CSurfaceType *this,CSurfaceType *param_1)

{
  char *pcVar1;
  
                    /* 0x9e380  238  ??0CSurfaceType@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0x24));
  *(char **)(this + 0x24) = pcVar1;
  return this;
}

