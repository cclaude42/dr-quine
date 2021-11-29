use std::fs::File;
use std::io::Write;
use std::path::Path;
use std::process::Command;

macro_rules! str { () => { "use std::fs::File;\nuse std::io::Write;\nuse std::path::Path;\nuse std::process::Command;\n\nmacro_rules! str {{ () => {{ {:?} }}; }}\n\nfn main ()\n{{\n\tlet mut i = {};\n\n\tif Path::new(\"Sully_5.rs\").exists() {{\n\t\ti -= 1;\n\t}}\n\tlet mut w = File::create(format!(\"Sully_{{}}.rs\", i)).unwrap();\n\twriteln!(w, str!(), str!(), i).unwrap();\n\tCommand::new(\"rustc\").arg(\"-o\").arg(format!(\"Sully_{{}}\", i)).arg(format!(\"Sully_{{}}.rs\", i)).spawn().unwrap().wait().unwrap();\n\tif i > 0 {{\n\t\tCommand::new(format!(\"./Sully_{{}}\", i)).spawn().unwrap().wait().unwrap();\n\t}}\n}}" }; }

fn main ()
{
	let mut i = 5;

	if Path::new("Sully_5.rs").exists() {
		i -= 1;
	}
	let mut w = File::create(format!("Sully_{}.rs", i)).unwrap();
	writeln!(w, str!(), str!(), i).unwrap();
	Command::new("rustc").arg("-o").arg(format!("Sully_{}", i)).arg(format!("Sully_{}.rs", i)).spawn().unwrap().wait().unwrap();
	if i > 0 {
		Command::new(format!("./Sully_{}", i)).spawn().unwrap().wait().unwrap();
	}
}
