
/* public: __thiscall CTerrainArchive::CTerrainArchive(class CTerrainArchive &) */

CTerrainArchive * __thiscall
CTerrainArchive::CTerrainArchive(CTerrainArchive *this,CTerrainArchive *param_1)

{
  CTerrainArchive *pCVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xcd3d0  266  ??0CTerrainArchive@@QAE@AAV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214a28;
  local_c = ExceptionList;
  if (param_1 == (CTerrainArchive *)0x0) {
    pCVar1 = (CTerrainArchive *)0x0;
  }
  else {
    pCVar1 = param_1 + 4;
  }
  ExceptionList = &local_c;
  *(undefined4 *)(this + 4) = *(undefined4 *)pCVar1;
  *(undefined ***)this = &CSerial::_vftable_;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  pcVar2 = StringDuplicate(*(char **)(param_1 + 0xc));
  *(char **)(this + 0xc) = pcVar2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  FUN_360cd300(this + 0x14,param_1 + 0x14);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  ExceptionList = local_c;
  return this;
}

