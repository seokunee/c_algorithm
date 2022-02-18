#include<stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_strs(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_charset(charset, str[i]) == 0)
		{
			while (str[i] && is_charset(charset, str[i]) == 0)
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && is_charset(charset, str[i]) == 0)
		i++;
	return (i);
}

char	*ft_strdup(char *str, int len)
{
	char	*copy;
	int	i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	while (i < len && str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	int	str_num;
	int	i;
	int	len;
	char		**arr;

	i = 0;
	len = 0;
	str_num = count_strs(str, charset);
	arr = (char **)malloc(sizeof(char *) * (str_num + 1));
	if (arr == NULL)
		return (NULL);
	while (i < str_num)
	{
		while (is_charset(charset, *str))
			str++;
		len = word_len(str, charset);
		arr[i] = ft_strdup(str, len);
		str += len;
		i++;
	}
	arr[i] = 0;
	return (arr);
}
