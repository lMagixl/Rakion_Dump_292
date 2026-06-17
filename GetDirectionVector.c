
/* public: void __thiscall CPlacement3D::GetDirectionVector(class Vector<float,3> &) */

void __thiscall CPlacement3D::GetDirectionVector(CPlacement3D *this,Vector<float,3> *param_1)

{
                    /* 0x2e20  1838  ?GetDirectionVector@CPlacement3D@@QAEXAAV?$Vector@M$02@@@Z */
  AnglesToDirectionVector((Vector<float,3> *)(this + 0xc),param_1);
  return;
}

