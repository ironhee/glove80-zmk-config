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
├─────╂─Ctl─┼─Alt─┼─Cmd─┼─Sft─┼─────┨                          ┠─────┼─Sft─┼─Cmd─┼─Alt─┼─Ctl─╂─────┤
│ Tab ┃ Z   │ X   │ C   │ V   │ B   ┃                          ┃ N   │ M   │ , ? │ . ! │ / \ ┃ Del │
├─────╄━━━━━┿━━━━━┿■FUNC┿■SYMB┿━━━━━┩                          ┡━━━━━┿■SYMB┿■NUMB┿━━━━━┿━━━━━╃─────┤
│Magic│ ←   │ ↑   │ ↓   │ →   │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│Vol ↓│Vol ↑│ Mute│ PP  │Magic│
└■MAGI┴─────┴─────┴─────┴─────┴┤ Cmd │ Sft │ Alt ││ Alt │ Sft │ Cmd ├┴─────┴─────┴─────┴─────┴■MAGI┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━Caps
                               ┃Space│Enter┃ Ctl ││ Ctl ┃Bkspc│ Sft ┃
                               ┗■NAVI┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛

┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐
│ S   │ + │ D   │ = │ Tab │        │ D   │ + │ F   │ = │Enter│        │ S   │ + │ F   │ = │ Esc │
└─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘
┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐
│ X   │ + │ C   │ = │ Del │        │ C   │ + │ V   │ = │Bkspc│
└─────┘   └─────┘   └─────┘        └─────┘   └─────┘   └─────┘
┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐        ┌─────┐   ┌─────┐   ┌─────┐
│ J   │ + │ K   │ = │Bkspc│        │ K   │ + │ L   │ = │ Del │        │ J   │ + │ L   │ = │ Caps│
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
│     ┃     │     │     │     │     ┃                          ┃     │Word←│  ↑  │Word→│     ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ Ctl │ Alt │ Cmd │ Sft │     ┃                          ┃ Home│  ←  │  ↓  │  →  │ End ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃Desk↓│Desk↑│Desk←│Desk→│     ┃                          ┃     │     │     │     │     ┃     │
├─────╄━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │     ┃
                               ┗▀▀▀▀▀┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
```

</details>

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
│     ┃ 0   │ 4   │ 5   │ 6   │     ┃                          ┃     │     │     │     │     ┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ 0   │ 1   │ 2   │ 3   │     ┃                          ┃     │ Sft │     │ Alt │ Ctl ┃     │
├─────╄━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿▀▀▀▀▀┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │ Cmd ┃
                               ┗━━━━━┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
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
│     ┃     │     │     │     │     ┃                          ┃ F11 │ F4  │ F5  │ F6  │ Slck┃     │
├─────╂─────┼─────┼─────┼─────┼─────┨                          ┠─────┼─────┼─────┼─────┼─────╂─────┤
│     ┃ Ctl │ Alt │     │ Sft │     ┃                          ┃ F10 │ F1  │ F2  │ F3  │ PsBk┃     │
├─────╄━━━━━┿━━━━━┿▀▀▀▀▀┿━━━━━┿━━━━━┩                          ┡━━━━━┿━━━━━┿━━━━━┿━━━━━┿━━━━━╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃ Cmd │     ┃     ││     ┃     │     ┃
                               ┗━━━━━┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
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
├─────╄─Ctl─┼─Alt─┼─Cmd─┼▀▀▀▀▀┿━━━━━┩                          ┡━━━━━┿▀▀▀▀▀┼─Cmd─┼─Alt─┼─Ctl─╃─────┤
│     │     │     │     │     │┌────┴┬─────┬─────┐┌─────┬─────┬┴────┐│     │     │     │     │     │
└─────┴─────┴─────┴─────┴─────┴┤     │     │     ││     │     │     ├┴─────┴─────┴─────┴─────┴─────┘
                               ┢━━━━━┿━━━━━╅─────┤├─────╆━━━━━┿━━━━━┪
                               ┃     │     ┃     ││     ┃     │     ┃
                               ┗━━━━━┷━━━━━┛─────┘└─────┺━━━━━┷━━━━━┛
```

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
