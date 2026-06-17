
/* public: int __thiscall CIntersector::IsIntersecting(void) */

int __thiscall CIntersector::IsIntersecting(CIntersector *this)

{
  uint uVar1;
  
                    /* 0x57250  2412  ?IsIntersecting@CIntersector@@QAEHXZ */
  uVar1 = *(uint *)(this + 8) & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  return (uint)(uVar1 != 0);
}

