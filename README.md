# Glove80 zmk keymap

## Keymap

<details open>
<summary>Layer - Default</summary>

```text
╭─────┬─────┬─────┬─────┬─────╮                                         ╭─────┬─────┬─────┬─────┬─────╮
│ F1  │ F2  │ F3  │ F4  │ F5  │                 D E F T                 │ F6  │ F7  │ F8  │ F9  │ F10 │
├─────┼─────┼─────┼─────┼─────┼─────╮                             ╭─────┼─────┼─────┼─────┼─────┼─────┤
│ F11 │ N1  │ N2  │ N3  │ N4  │ N5  │                             │ N6  │ N7  │ N8  │ N9  │ N0  │ F12 │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Esc │ Q   │ W   │ E   │ R   │ T   │                             │ Y   │ U   │ I   │ O   │ P   │ Del │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ ' " │Bkspc│
├─────┼─Gui─┼─Alt─┼─Ctl─┼─Sft─┼─────┤                             ├─────┼─Sft─┼─Ctl─┼─Alt─┼─Gui─┼─────┤
│Bkspc│ Z   │ X   │ C   │ V   │ B   │                             │ N   │ M   │ , ? │ . ! │ / \ │Enter│
├─────┼─────┼─────┼─────┼■SYMB┼─────┤                             ├─────┼■SYMB┼─────┼─────┼─────┼─────┤
│Magic│ ←   │ ↑   │ ↓   │ →   │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │Vol ↓│Vol ↑│ Mute│ PP  │Magic│
╰■MAGI┴─────┴─────┴─────┴─────┴─│ Ctl │ C+S │ Alt │ │ Alt │ Caps│ Lang│─┴─────┴─────┴─────┴─────┴■MAGI╯
                                ├─────┼─────┼─────┤ ├─────┼─────┼─────┤
                                │Space│Enter│ Gui │ │ Gui │ Sft │Bkspc│
                                ╰■NAVI┴─────┴─────╯ ╰─────┴─────┴■NUMB╯
```

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│Enter│   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰─────╯   ├─────┼▀▀▀▀▀┼▀▀▀▀▀┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
```

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Tab │   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰─────╯   ├─────┼─────┼▀▀▀▀▀┼▀▀▀▀▀┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
```

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│Bkspc│   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰─────╯   ├─────┼─────┼─────┼▀▀▀▀▀┼▀▀▀▀▀┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
```

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Esc │   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰─────╯   ├─────┼─────┼▀▀▀▀▀┼─────┼▀▀▀▀▀┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
```

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Lang│   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰─────╯   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼▀▀▀▀▀┼▀▀▀▀▀┼─────┼─────┼─────┤
```

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Caps│   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰─────╯   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼▀▀▀▀▀┼▀▀▀▀▀┼─────┼─────┤
```

```text
╭─────╮   │     │     │     │     │     │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │     │     │     │     │     │
│→FUNC│   ╰─────┴─────┴─────┴─────┴─────┴─│ Sft │ Ctr │ Alt │ │ Alt │ Ctr │ Sft │─┴─────┴─────┴─────┴─────┴─────╯
╰─────╯                                   ├▀▀▀▀▀┼─────┼─────┤ ├─────┼─────┼▀▀▀▀▀┤
```

</details>

<details>
<summary>Layer - Navigation</summary>

```text
╭─────┬─────┬─────┬─────┬─────╮                                         ╭─────┬─────┬─────┬─────┬─────╮
│     │     │     │     │     │                 N A V I                 │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────╮                             ╭─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │Ctl ←│  ↑  │Ctl →│     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ Gui │ Alt │ Ctl │ Sft │     │                             │ Home│  ←  │  ↓  │  →  │ End │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │ D ← │ D   │ D → │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │ H ← │ T x │ H → │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │     │     │     │     │     │
╰─────┴─────┴─────┴─────┴─────┴─│     │     │     │ │     │     │     │─┴─────┴─────┴─────┴─────┴─────╯
                                ├─────┼─────┼─────┤ ├─────┼─────┼─────┤
                                │←NAVI│     │     │ │     │     │     │
                                ╰▀▀▀▀▀┴─────┴─────╯ ╰─────┴─────┴─────╯
```

</details>

<details>
<summary>Layer - Number</summary>

```text
╭─────┬─────┬─────┬─────┬─────╮                                         ╭─────┬─────┬─────┬─────┬─────╮
│     │     │     │     │     │                 N U M B                 │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────╮                             ╭─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ 0   │ 7   │ 8   │ 9   │ :   │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ 0   │ 4   │ 5   │ 6   │ ,   │                             │     │ Sft │ Ctl │ Alt │ Gui │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ 0   │ 1   │ 2   │ 3   │ .   │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │     │     │     │     │     │
╰─────┴─────┴─────┴─────┴─────┴─│     │     │     │ │     │     │     │─┴─────┴─────┴─────┴─────┴─────╯
                                ├─────┼─────┼─────┤ ├─────┼─────┼─────┤
                                │     │     │     │ │     │     │←NUMB│
                                ╰─────┴─────┴─────╯ ╰─────┴─────┴▀▀▀▀▀╯
```

</details>

<details>
<summary>Layer - Function</summary>

```text
╭─────┬─────┬─────┬─────┬─────╮                                         ╭─────┬─────┬─────┬─────┬─────╮
│     │     │     │     │     │                 F U N C                 │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────╮                             ╭─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ F12 │ F7  │ F8  │ F9  │ Pscn│                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ F11 │ F4  │ F5  │ F6  │ Slck│                             │     │ Sft │ Ctl │ Alt │ Gui │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │ F10 │ F1  │ F2  │ F3  │ PsBk│                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │     │     │     │     │     │
╰─────┴─────┴─────┴─────┴─────┴─│     │     │     │ │     │     │     │─┴─────┴─────┴─────┴─────┴─────╯
                                ├─────┼─────┼─────┤ ├─────┼─────┼─────┤
                                │→NAVI│     │     │ │     │     │→NUMB│
                                ╰▀▀▀▀▀┴─────┴─────╯ ╰─────┴─────┴▀▀▀▀▀╯
```

</details>

<details>
<summary>Layer - Symbol</summary>

```text
╭─────┬─────┬─────┬─────┬─────╮                                         ╭─────┬─────┬─────┬─────┬─────╮
│     │     │     │     │     │                 S Y M B                 │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────╮                             ╭─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │  <  │  >  │  &  │  ^  │                             │  $  │  `  │  [  │  ]  │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │  !  │  -  │  +  │  =  │  %  │                             │  @  │  _  │  (  │  )  │  ;  │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │  ?  │  /  │  *  │  |  │  :  │                             │  #  │  ~  │  {  │  }  │  :  │     │
├─────┼─────┼─────┼─────┼▀▀▀▀▀┼─────┤                             ├─────┼─────┼▀▀▀▀▀┼─────┼─────┼─────┤
│     │     │     │     │     │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │     │     │     │     │     │
╰─────┴─────┴─────┴─────┴─────┴─│     │     │     │ │     │     │     │─┴─────┴─────┴─────┴─────┴─────╯
                                ├─────┼─────┼─────┤ ├─────┼─────┼─────┤
                                │     │     │     │ │     │     │     │
                                ╰─────┴─────┴─────╯ ╰─────┴─────┴─────╯
```

</details>

<details>
<summary>Layer - Magic</summary>

```text
╭─────┬─────┬─────┬─────┬─────╮                                         ╭─────┬─────┬─────┬─────┬─────╮
│ BT x│     │     │     │     │                 M A G I                 │     │     │     │     │ BT X│
├─────┼─────┼─────┼─────┼─────┼─────╮                             ╭─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │     │                             │     │     │     │     │     │     │
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │RGB  │RGB  │RGB  │RGB  │RGB  │                             │     │     │     │     │     │     │
│ Boot│SPD ↑│COL ↑│COL →│BRI ↑│Toggl│                             │     │     │     │     │     │ Boot│
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │RGB  │RGB  │RGB  │RGB  │RGB  │                             │     │     │     │     │     │     │
│Reset│SPD ↓│COL ↓│COL ←│BRI ↓│Effec│                             │     │     │     │     │     │Reset│
├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│     │     │     │     │     │ ╭───┴─┬─────┬─────╮ ╭─────┬─────┬─┴───╮ │     │     │     │     │     │
╰▀▀▀▀▀┴─────┴─────┴─────┴─────┴─│ BT 2│ BT 3│     │ │     │     │     │─┴─────┴─────┴─────┴─────┴▀▀▀▀▀╯
                                ├─────┼─────┼─────┤ ├─────┼─────┼─────┤
                                │ BT 0│ BT 1│ USB │ │     │     │     │
                                ╰─────┴─────┴─────╯ ╰─────┴─────┴─────╯
```

</details>

## Guides

### Guide - [Keypress](https://zmk.dev/docs/behaviors/key-press)

**Tap**: `A`

```text
╭─────╮
│ A   │
╰─────╯
```

### Guide - [Morp Shift](https://zmk.dev/docs/behaviors/mod-morph)

**Tap**: `/`

**Shift Tap**: `\`

```text
╭─────╮
│ / \ │
╰─────╯
```

### Guide: [Mod-Tap](https://zmk.dev/docs/behaviors/mod-tap)

**Tap**: `A`

**Hold**: `Shift`

```text
╭─────╮
│ A   │
╰─Sft─╯
```

### Guide: [Tap-Dance](https://zmk.dev/docs/behaviors/tap-dance)

**Tap**: `Shift`

**Double Tab**: `Caps Word`

```text
╭──Caps
│ Sft │
╰─────╯
```

### Guide: [Layer](https://zmk.dev/docs/behaviors/layers)

**Tap**: Enables `NUMB` layer

```text
╭─────╮
│→NUMB│
╰─────╯
```

**Tap**: disables `NUMB` layer

```text
╭─────╮
│←NUMB│
╰─────╯
```

**Hold**: Momentary enables `NUMB` layer

```text
Layers - DEFT
╭─────╮
│     │
╰▀NUMB╯
```

`NUMB` layer is enabled momentarily while the key is pressed


```text
Layers - NUMB
╭─────╮
│     │
╰▀▀▀▀▀╯
```

### Guide: [Combo](https://zmk.dev/docs/features/combos)

**Tap `S` + `D`**: `Esc`

**Hold `S` + `D`**: Momentary enables `NUMB` layer

```text
╭─────╮   ├─────┼─────┼─────┼─────┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
│ Esc │   │     │ A   │ S   │ D   │ F   │ G   │                             │ H   │ J   │ K   │ L   │ '   │     │
╰▀NUMB╯   ├─────┼─────┼▀▀▀▀▀┼▀▀▀▀▀┼─────┼─────┤                             ├─────┼─────┼─────┼─────┼─────┼─────┤
```
