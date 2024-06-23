# Glove80 zmk keymap

```text
Notation                    │ Description
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│ A   │                     │ Tap: A
└─────┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│ / \ │                     │ Tap: /, Shift Tap: \
└─────┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│     │                     │ Hold: Shift
└─Sft─┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌──Caps                     │
│     │                     │ Double Tap: Caps Word
└─────┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│→NUMB│                     │ Tap: Enables NUMB layer
└─────┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│←NUMB│                     │ Tap: disables NUMB layer
└─────┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│     │                     │ Hold: Momentary enables NUMB layer
└▀NUMB┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐                     │
│     │                     │ Layer is enabled momentarily while the key is pressed
└▀▀▀▀▀┘                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┏━━━━━┓                     │
┃     ┃                     │ Main typing area
┗━━━━━┛                     │
────────────────────────────┼──────────────────────────────────────────────────────────────────
┌─────┐   ┌─────┐   ┌─────┐ │
│ A   │ + │ B   │ = │Enter│ │ Tap A and B: Enter
└─────┘   └─────┘   └─────┘ │
```

## Keymap

<details open>
<summary>Layer - <code>DEFT</code> (Base)</summary>

```text
┌─────┬─────┬─────┬─────┬─────┐                                      ┌─────┬─────┬─────┬─────┬─────┐
│ F1  │ F2  │ F3  │ F4  │ F5  │                                      │ F6  │ F7  │ F8  │ F9  │ F10 │
├─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┤
│ F11 │ N1  │ N2  │ N3  │ N4  │ N5  │                          │ N6  │ N7  │ N8  │ N9  │ N0  │ F12 │
├─────╆━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┪                          ┢━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╅─────┤
│ Esc ┃ Q   │ W   │ E   │ R   │ T   ┃                          ┃ Y   │ U   │ I   │ O   │ P   ┃ Caps│
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│Enter┃ A   │ S   │ D   │ F   │ G   ┃                          ┃ H   │ J   │ K   │ L   │ ' " ┃Bkspc│
├─────╂─Gui─┼─Alt─┼─Ctl─┼─Sft─┼─────┨                          ┠─────┼─Sft─┼─Ctl─┼─Alt─┼─Gui─╂─────┤
│ Tab ┃ Z   │ X   │ C   │ V   │ B   ┃                          ┃ N   │ M   │ , ? │ . ! │ / \ ┃ Del │
├─────╄━━━━━┿━━━━━┿━━━━━┿■SYMB┿━━━━━┩                          ┡━━━━━┿■SYMB┿■NUMB┿━━━━━┿━━━━━╃─────┤
│Magic│ ←   │ ↑   │ ↓   │ →   │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│Vol ↓│Vol ↑│ Mute│ PP  │Magic│
└■MAGI┴─────┴─────┴─────┴─────┴┤ Ctl │ Sft │ Alt ││ Alt │ Sft │ Ctl ├┴─────┴─────┴─────┴─────┴■MAGI┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━Caps
                               ┃Space│Rpeat┃ Gui ││ Gui ┃Bkspc│ Sft ┃
                               ┗■NAVI┷■FUNC┛─────┘└─────┺■NUMB┷━━━━━┛

┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐
│ S   │ + │ D   │ = │ Tab │        │ D   │ + │ F   │ = │Enter│        │ S   │ + │ F   │ = │ Esc │
└─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘
┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐
│ X   │ + │ C   │ = │ Del │        │ C   │ + │ V   │ = │Bkspc│
└─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘
┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐
│ J   │ + │ K   │ = │Bkspc│        │ K   │ + │ L   │ = │ Del │        │ J   │ + │ L   │ = │ Lang│
└─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘
```

</details>

<details>
<summary>Layer - <code>NAVI</code></summary>

```text
┌─────┬─────┬─────┬─────┬─────┐                                      ┌─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │                                      │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                          │     │     │     │     │     │     │
├─────╆━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┪                          ┢━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╅─────┤
│     ┃     │     │     │     │     ┃                          ┃     │Ctl ←│  ↑  │Ctl →│     ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ Gui │ Alt │ Ctl │ Sft │     ┃                          ┃ Home│  ←  │  ↓  │  →  │ End ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃App ↑│Desk↑│Desk←│Desk→│     ┃                          ┃     │     │     │     │     ┃     │
├─────╄━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │     ┃
                               ┗▀▀▀▀▀┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
```

</details>

<details>
<summary>Layer - <code>NUMB</code></summary>

```text
┌─────┬─────┬─────┬─────┬─────┐                                      ┌─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │                                      │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                          │     │     │     │     │     │     │
├─────╆━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┪                          ┢━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╅─────┤
│     ┃ 0   │ 7   │ 8   │ 9   │     ┃                          ┃     │     │     │     │     ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ 0   │ 4   │ 5   │ 6   │     ┃                          ┃     │ Sft │ Ctl │ Alt │ Gui ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ 0   │ 1   │ 2   │ 3   │     ┃                          ┃     │     │     │     │     ┃     │
├─────╄━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿▀▀▀▀▀┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │     ┃
                               ┗━━━━━┷━━━━━┛─────┘└─────┺▀▀▀▀▀┷━━━━━┛
```

</details>

<details>
<summary>Layer - <code>FUNC</code></summary>

```text
┌─────┬─────┬─────┬─────┬─────┐                                      ┌─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │                                      │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                          │     │     │     │     │     │     │
├─────╆━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┪                          ┢━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╅─────┤
│     ┃     │     │     │     │     ┃                          ┃ F12 │ F7  │ F8  │ F9  │ Pscn┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ Gui │ Alt │ Ctl │ Sft │     ┃                          ┃ F11 │ F4  │ F5  │ F6  │ Slck┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃     │     │     │     │     ┃                          ┃ F10 │ F1  │ F2  │ F3  │ PsBk┃     │
├─────╄━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │     ┃
                               ┗━━━━━┷▀▀▀▀▀┛─────┘└─────┺━━━━━┷━━━━━┛
```

</details>

<details>
<summary>Layer - <code>SYMB</code></summary>

```text
┌─────┬─────┬─────┬─────┬─────┐                                      ┌─────┬─────┬─────┬─────┬─────┐
│     │     │     │     │     │                                      │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                          │     │     │     │     │     │     │
├─────╆━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┪                          ┢━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╅─────┤
│     ┃     │  <  │  >  │  &  │  ^  ┃                          ┃     │  `  │  [  │  ]  │  \  ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃  !  │  -  │  +  │  =  │  :  ┃                          ┃  @  │  _  │  (  │  )  │  ;  ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃  ?  │  /  │  *  │  |  │  %  ┃                          ┃  #  │  $  │  {  │  }  │  ~  ┃     │
├─────╄━━━━━┿━━━━━┿━━━━━┿▀▀▀▀▀┿━━━━━┩                          ┡━━━━━┿▀▀▀▀▀┿━━━━━┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │     ┃
                               ┗━━━━━┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
```

</details>

<details>
<summary>Layer - <code>MAGI</code></summary>

```text
┌─────┬─────┬─────┬─────┬─────┐                                      ┌─────┬─────┬─────┬─────┬─────┐
│ BT x│     │     │     │     │                                      │     │     │     │     │ BT X│
├─────┼─────┼─────┼─────┼─────┼─────┐                          ┌─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                          │     │     │     │     │     │     │
├─────╆━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┪                          ┢━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╅─────┤
│     ┃     │     │     │     │     ┃                          ┃     │     │     │     │     ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃RGB  │RGB  │RGB  │RGB  │RGB  ┃                          ┃     │     │     │     │     ┃     │
│ Boot┃SPD ↑│COL ↑│COL →│BRI ↑│Toggl┃                          ┃     │     │     │     │     ┃ Boot│
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃RGB  │RGB  │RGB  │RGB  │RGB  ┃                          ┃     │     │     │     │     ┃     │
│Reset┃SPD ↓│COL ↓│COL ←│BRI ↓│Effec┃                          ┃     │     │     │     │     ┃Reset│
├─────╄━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└▀▀▀▀▀┴─────┴─────┴─────┴─────┴┤ BT 2│ BT 3│     ││     │     │     ├┴─────┴─────┴─────┴─────┴▀▀▀▀▀┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃ BT 0│ BT 1┃ USB ││     ┃     │     ┃
                               ┗━━━━━┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
```

</details>
