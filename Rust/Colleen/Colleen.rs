// The macro
macro_rules! prog { () => {"// The macro\nmacro_rules! prog {{ () => {{{:?}}}; }}\n\nfn main ()\n{{\n\t// The program\n\tcolleen();\n}}\n\nfn colleen () -> ()\n{{\n\tprintln!(prog!(), prog!());\n}}"}; }

fn main ()
{
	// The program
	colleen();
}

fn colleen () -> ()
{
	println!(prog!(), prog!());
}
