#include "main.h"

/**
 * main - a program that displays the information contained
 * in the ELF header at the start of an ELF file.
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0 on success -1 if faild.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->v);
	printf("ELF Header:\n");
	flushmagic(header->v);
	flushclass(header->v);
	flushdata(header->v);
	flushversion(header->v);
	flushosabi(header->v);
	flushabi(header->v);
	flushtype(header->e_type, header->v);
	flushentry(header->e_entry, header->v);

	free(header);
	close_elf(o);
	return (0);
}
