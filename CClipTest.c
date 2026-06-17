
/* public: __thiscall CClipTest::CClipTest(class CClipTest const &) */

CClipTest * __thiscall CClipTest::CClipTest(CClipTest *this,CClipTest *param_1)

{
                    /* 0xcdcf0  60  ??0CClipTest@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  CCollisionInfo::CCollisionInfo((CCollisionInfo *)(this + 0xc),(CCollisionInfo *)(param_1 + 0xc));
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return this;
}

