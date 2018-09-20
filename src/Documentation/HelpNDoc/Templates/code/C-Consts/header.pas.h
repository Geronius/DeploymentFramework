var
	aTopicList: THndTopicsInfoArray;
	nCurTopic: integer;
	sModuleName: string;

begin
	HndGeneratorInfo.CurrentFile := ExtractFileName(HndGeneratorInfo.OutputFile);
	sModuleName := ChangeFileExt(ExtractFileName(HndGeneratorInfo.OutputFile), '');
	aTopicList := HndTopics.GetTopicListVisible(False);
	
	printfln('/* Project: %s */', [HndProjects.GetProjectTitle()]);
	println ('/* Generated by HelpNDoc - http://www.helpndoc.com */');
	println ('');
	printfln('#ifndef __%s_HEADER__', [sModuleName]);
	printfln('#define __%s_HEADER__', [sModuleName]);
	println ('');
	for nCurTopic := 0 to length(aTopicList) - 1 do
	begin
		printfln('const int HELP_%s = %d; %s // Topic: "%s"', [aTopicList[nCurTopic].HelpId, aTopicList[nCurTopic].HelpContext, #09#09#09#09, aTopicList[nCurTopic].Caption]);
	end;
	println ('');
	println ('#endif');
	
end.