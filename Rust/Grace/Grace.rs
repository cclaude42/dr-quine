use std::fs::File;
use std::io::Write;

macro_rules! str { () => {"use std::fs::File;\nuse std::io::Write;\n\nmacro_rules! str {{ () => {{{:?}}}; }}\nmacro_rules! code {{ () => {{ let mut w = File::create(\"Grace_kid.rs\").unwrap(); writeln!(w, str!(), str!()).unwrap(); }}; }}\nmacro_rules! ft {{ () => {{ fn main () {{ /* Time to execute some code ! */ code!(); }} }}; }}\n\nft!();"}; }
macro_rules! code { () => { let mut w = File::create("Grace_kid.rs").unwrap(); writeln!(w, str!(), str!()).unwrap(); }; }
macro_rules! ft { () => { fn main () { /* Time to execute some code ! */ code!(); } }; }

ft!();
