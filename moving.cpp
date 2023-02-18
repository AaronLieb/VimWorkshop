/* Welcome to part 1 - Moving Around
 * This will teach you how to move around in vim
 *
 * By default, you should be in NORMAL mode.
 * In this mode you can use a lot of different keybindings
 *
 * If you ever change to another mode, you can use <ESC> to switch back to normal mode
 *
 * ------------------------------------------------------------------
 *
 * To your cursor around, use hjkl 
 *
 *    k
 *  h   l
 *    j
 *
 * h = left, j = down, k = up, l = right
 *
 * Try moving around this text for a bit and get comfortable!
 *
 * ------------------------------------------------------------------
 *
 *  You can move the viewport (screen) using 
 *
 *  CTRL+D to go down
 *  CTRL+U to go up
 *
 * ------------------------------------------------------------------
 *
 * Most motions in vim can multiplied by putting a number before them
 *
 * Ex) "3j" will move down 3 lines. "5l" will move right 5 characters
 *
 * Try jumping from here
 *          |
 *          |
 *          |
 *          |
 *          |
 *          V
 * to here in one motion!
 *
 * ------------------------------------------------------------------
 *
 * You can also jump from word-to-word using "w", and "b".
 * "w" puts you are the start of the next word
 * "b" moves you back one word
 *
 * Here is a sentence containing lots of words, try using w and b lots of times to see how they work!
 *
 * ------------------------------------------------------------------
 *
 * Here are some more useful motions:
 *
 * ^ = move to beginning of line
 * $ = move to end of line
 * gg = move to top of file
 * G = move to bottom of file
 *
 * Try them out!
 *
 * ------------------------------------------------------------------
 *
 * Now lets check out searching
 *
 * "f" can be used to find the next occurance of a character on your current line
 * Pressing "ft" will move your cursor to the next "t" on your current line
 * After that pressing ";" will move you to the next "t" after that
 *
 * Try it out!
 *
 * This is a long text with lots of t's on it
 *
 * ------------------------------------------------------------------
 *
 * You can also do a global serach using "/"
 * You type "/" and then the word you want to find. Press enter to finalize it.
 * You can then type "n" to move to the next occurance of that word.
 *
 * Find the word: "c a t s" in this paragraph:
 *
 * As the night settled in, the old, abandoned house at the edge of the woods
 * seemed to come alive with the eerie meowing of two cats. The wind howled
 * outside, rustling the branches of the trees and causing the shutters to bang
 * against the windows. Inside, the only source of light came from the
 * flickering candles on the dusty shelves, casting long shadows on the cracked
 * walls. Suddenly, a loud thud echoed through the hallway, making the cats
 * hiss and scurry away. Was it just the wind, or was there something more
 * sinister lurking in the darkness? As the protagonist cautiously tiptoed down
 * the creaky stairs, heart racing with each step, they couldn't help but
 * wonder if the cats had known all along what was about to happen.
 *
 * ------------------------------------------------------------------
 *
 * And there you have it! Those are the basic movement options in vim.
 * Theres a LOT more, but this will get you started!
 *
 * Press zz to recenter your screen at your cursor 
 *
 * To go to the next file, move your cursor over "manip.cpp" below and press "gf" */

#include "manip.cpp"










