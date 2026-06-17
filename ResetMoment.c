
/* public: void __thiscall CRigidBody::ResetMoment(void) */

void __thiscall CRigidBody::ResetMoment(CRigidBody *this)

{
                    /* 0x18dc30  3165  ?ResetMoment@CRigidBody@@QAEXXZ */
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return;
}

