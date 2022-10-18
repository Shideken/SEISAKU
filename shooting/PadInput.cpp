#include"PadInput.h"
#include"DxLib.h"


PAD::PAD() {

}

void PAD::PadInput()
{
    g_OldKey = g_NowKey;
    g_NowKey = GetJoypadInputState(DX_INPUT_KEY_PAD1);
    g_KeyFlg = g_NowKey & ~g_OldKey;
}