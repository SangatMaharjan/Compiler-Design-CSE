# Lab 2: Lexical Analyzer for Token Recognition Using Flex

## Aim

To design and implement a lexical analyzer for token recognition using Flex.

---

# Objective

- To understand lexical analysis.
- To recognize tokens using Flex.
- To identify keywords, identifiers, operators, and numbers.
- To generate a lexical analyzer automatically.
- To compile and execute the generated scanner.

---

# Theory

Lexical Analysis is the first phase of a compiler.

A lexical analyzer reads the source code character by character and converts it into meaningful units called **tokens**.

## Types of Tokens

- Keywords
- Identifiers
- Operators
- Constants
- Special Symbols

---

# What is Flex?

Flex (Fast Lexical Analyzer Generator) is a tool used to generate lexical analyzers automatically from regular expressions and rules.

A Flex program contains three sections:

```text
Definitions
%%
Rules
%%
User Functions