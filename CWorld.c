
/* public: __thiscall CWorld::CWorld(void) */

CWorld * __thiscall CWorld::CWorld(CWorld *this)

{
  CBrushArchive *this_00;
  undefined4 uVar1;
  CTerrainArchive *this_01;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* 0xca090  288  ??0CWorld@@QAE@XZ */
  puStack_8 = &LAB_36214766;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  local_4 = 5;
  uStack_3 = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this_00 = (CBrushArchive *)FUN_361bf99c(0x48);
  local_4 = 6;
  if (this_00 == (CBrushArchive *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CBrushArchive::CBrushArchive(this_00);
  }
  local_4 = 5;
  *(undefined4 *)(this + 0x34) = uVar1;
  this_01 = (CTerrainArchive *)FUN_361bf99c(0x2c);
  local_4 = 7;
  if (this_01 == (CTerrainArchive *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CTerrainArchive::CTerrainArchive(this_01);
  }
  *(undefined4 *)(this + 0x38) = uVar1;
  FUN_360ccb50((undefined4 *)(this + 0x3c));
  local_4 = 8;
  FUN_360d8410((undefined4 *)(this + 0x4c));
  local_4 = 9;
  FUN_36103000((undefined4 *)(this + 0x68));
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0x10;
  *(undefined4 *)(this + 0x98) = 0xbfbfbf00;
  *(undefined4 *)(this + 0x9c) = 0;
  local_4 = 0xc;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xa0) = pcVar2;
  local_4 = 0xd;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xa4) = pcVar2;
  local_4 = 0xe;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xa8) = pcVar2;
  local_4 = 0xf;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xac) = pcVar2;
  local_4 = 0x10;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x118) = pcVar2;
  *(undefined4 *)(this + 0x11c) = 0;
  local_4 = 0x11;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x124) = pcVar2;
  local_4 = 0x12;
  *(undefined4 *)(this + 0x128) = 0;
  pcVar2 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 300) = pcVar2;
  local_4 = 0x13;
  CListHead::Clear((CListHead *)(this + 0x134));
  CListHead::Clear((CListHead *)(this + 0x140));
  CListHead::Clear((CListHead *)(this + 0x14c));
  *(undefined4 *)(this + 0x158) = 0;
  FUN_360ccb50((undefined4 *)(this + 0x15c));
  *(CWorld **)(*(int *)(this + 0x34) + 0x34) = this;
  *(CWorld **)(*(int *)(this + 0x38) + 0x28) = this;
  local_4 = 0x14;
  *(undefined4 *)this = 0x100;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0x1c20);
  local_4 = 0x15;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x101;
    _eh_vector_constructor_iterator_
              (puVar4,0x1c,0x101,CTextureTransformation::CTextureTransformation,
               CTextureTransformation::~CTextureTransformation);
  }
  *(undefined4 **)(this + 4) = puVar4;
  local_4 = 0x14;
  *(undefined4 *)(this + 8) = 0x100;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0xc10);
  local_4 = 0x16;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x101;
    _eh_vector_constructor_iterator_
              (puVar4,0xc,0x101,CTextureBlending::CTextureBlending,
               CTextureBlending::~CTextureBlending);
  }
  *(undefined4 **)(this + 0xc) = puVar4;
  local_4 = 0x14;
  *(undefined4 *)(this + 0x10) = 0x100;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0x282c);
  local_4 = 0x17;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x101;
    _eh_vector_constructor_iterator_
              (puVar4,0x28,0x101,CSurfaceType::CSurfaceType,CSurfaceType::~CSurfaceType);
  }
  *(undefined4 **)(this + 0x14) = puVar4;
  local_4 = 0x14;
  *(undefined4 *)(this + 0x18) = 0x100;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0x383c);
  local_4 = 0x18;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x101;
    _eh_vector_constructor_iterator_
              (puVar4,0x38,0x101,CContentType::CContentType,CContentType::~CContentType);
  }
  *(undefined4 **)(this + 0x1c) = puVar4;
  local_4 = 0x14;
  *(undefined4 *)(this + 0x20) = 0x100;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0x80c);
  local_4 = 0x19;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x101;
    _eh_vector_constructor_iterator_
              (puVar4,8,0x101,CEnvironmentType::CEnvironmentType,CEnvironmentType::~CEnvironmentType
              );
  }
  *(undefined4 **)(this + 0x24) = puVar4;
  local_4 = 0x14;
  *(undefined4 *)(this + 0x28) = 0x100;
  puVar3 = (undefined4 *)thunk_FUN_361bf99c(0x408);
  local_4 = 0x1a;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar3 = 0x101;
    _eh_vector_constructor_iterator_
              (puVar4,4,0x101,CIlluminationType::CIlluminationType,
               CIlluminationType::~CIlluminationType);
  }
  _local_4 = CONCAT31(uStack_3,0x14);
  *(undefined4 **)(this + 0x2c) = puVar4;
  InitCollisionGrid(this);
  *(undefined4 *)(this + 0x120) = 0;
  pcVar2 = StringDuplicate(&DAT_36231e5e);
  StringFree(*(char **)(this + 0xa0));
  *(char **)(this + 0xa0) = pcVar2;
  pcVar2 = StringDuplicate(&DAT_36231e5f);
  StringFree(*(char **)(this + 0xa4));
  *(char **)(this + 0xa4) = pcVar2;
  pcVar2 = StringDuplicate(&DAT_36231e60);
  StringFree(*(char **)(this + 0xa8));
  *(char **)(this + 0xa8) = pcVar2;
  pcVar2 = StringDuplicate(&DAT_36231e61);
  StringFree(*(char **)(this + 0xac));
  *(char **)(this + 0xac) = pcVar2;
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb0) = 0x3f800000;
  *(undefined4 *)(this + 0xc4) = 0x3f800000;
  *(undefined4 *)(this + 0xc0) = 0x3f800000;
  *(undefined4 *)(this + 0xd4) = 0x3f800000;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined4 *)(this + 0xe0) = 0x40400000;
  *(undefined4 *)(this + 0xe4) = 0x40800000;
  *(undefined4 *)(this + 0xe8) = 0x41200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xec) = 0x41a00000;
  *(undefined4 *)(this + 0xf0) = 0xc1a00000;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0x130) = 1;
  *(undefined4 *)(this + 0xf8) = 0x41200000;
  *(undefined4 *)(this + 0xfc) = 0x40400000;
  *(undefined4 *)(this + 0x100) = 0x40800000;
  *(undefined4 *)(this + 0x104) = 0x41200000;
  *(undefined4 *)(this + 0x108) = 0x41a00000;
  *(undefined4 *)(this + 0x10c) = 0xc1a00000;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0x41200000;
  thunk_FUN_360d8290((undefined4 *)(this + 0x4c));
  thunk_FUN_360d7e00(this + 0x4c,200,0x14,5);
  ExceptionList = local_c;
  return this;
}

