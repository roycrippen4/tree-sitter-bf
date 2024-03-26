module.exports = grammar({
  name: 'brainfuck',
  rules: {
    program: $ => repeat(choice($._instruction, $.comment)),
    _instruction: $ =>
      choice(
        $.increment,
        $.decrement,
        $.move_right,
        $.move_left,
        $.output,
        $.input,
        $.loop
      ),
    increment: $ => token('+'),
    decrement: $ => token('-'),
    move_right: $ => token('>'),
    move_left: $ => token('<'),
    output: $ => token('.'),
    input: $ => token(','),
    loop: $ => seq('[', repeat($._instruction), ']'),
    comment: $ => token(/[^+\-<>\[\]\.,]+/),
  },
});
