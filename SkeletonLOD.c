
/* public: __thiscall SkeletonLOD::SkeletonLOD(struct SkeletonLOD const &) */

SkeletonLOD * __thiscall SkeletonLOD::SkeletonLOD(SkeletonLOD *this,SkeletonLOD *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x131d0  361  ??0SkeletonLOD@@QAE@ABU0@@Z */
  puStack_8 = &LAB_3620dfd6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  local_4 = 1;
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0x14));
  *(char **)(this + 0x14) = pcVar1;
  ExceptionList = local_c;
  return this;
}

